//
//  PM25MAAnnotationView.h
//  WuMai
//
//  Created by Diyuan Wang on 2019/11/24
//  Copyright (c) 2019 None All rights reserved.
//

#import <MAMapKit/MAMapKit.h>

@interface PM25MAAnnotationView : MAAnnotationView

- (void)showAqi:(NSString *)aqiLevel zoom:(int)zoomLevel;

- (void)refreshImage:(int)zoomLevel;

@end
