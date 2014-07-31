//
//  HPDFieldView.h
//  Ultimate Whiteboard
//
//  Created by Jia Hao on 29/7/14.
//  Copyright (c) 2014 Hippo Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HPDFieldView : UIView

@property (nonatomic) CGRect fieldBounds;


- (id)initWithFrame:(CGRect)frame fieldBounds:(CGRect)fieldBounds;

@end
