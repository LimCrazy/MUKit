//
//  UIImageView+MUCache.h
//  MUKit_Example
//
//  Created by Jekity on 2018/12/19.
//  Copyright © 2018 Jeykit. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImageView (MUCache)

/**
 *  Convenient method of setIconURLString:imageURLString. sizetoFit(0~100)
 */
- (void)setIconURLString:(NSString*)imageURLString;

/**
 *  Download an icon, and save it using [MUImageIconCache shareInstance].
 */
- (void)setIconURLString:(NSString*)imageURLString
    placeHolderImageName:(NSString*)imageName;

/**
 *  Download an icon, and save it using [MUImageIconCache shareInstance].
 */
- (void)setIconURLString:(NSString*)imageURLString
    placeHolderImageName:(NSString*)imageName
            cornerRadius:(CGFloat)cornerRadius;

/**
 *
 *
 *  @param imageURLString originalURL
 */
- (void)setImageURLString:(NSString*)imageURLString;

/**
 *  Download images and render them with the below order:
 *  1. imageURLString
 *  2. placeHolderImageName
 *
 *  These images will be saved into [FlyImageCache shareInstance]
 */
- (void)setImageURLString:(NSString*)imageURLString
     placeHolderImageName:(NSString*)imageName;


/**
 *  Download images and render them with the below order:
 *  1. imageURLString
 *  2. placeHolderImageName
 *  3. cornerRadius
 *
 *  These images will be saved into [MUImageCache shareInstance]
 */
- (void)setImageURLString:(NSString*)imageURLString
     placeHolderImageName:(NSString*)imageName
             cornerRadius:(CGFloat)cornerRadius;

@end

