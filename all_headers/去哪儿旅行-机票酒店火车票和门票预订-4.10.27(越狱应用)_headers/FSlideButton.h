//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QWCommonButton.h"

@interface FSlideButton : QWCommonButton
{
}

+ (id)buttonWithTitle:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3 buttonWidth:(double)arg4;
+ (id)buttonWithTitle:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3 insets:(struct UIEdgeInsets)arg4;
+ (id)buttonWithTitle:(id)arg1 icon:(id)arg2 backgroundColor:(id)arg3 padding:(long long)arg4;
+ (id)buttonWithTitle:(id)arg1 backgroundColor:(id)arg2 insets:(struct UIEdgeInsets)arg3;
+ (id)buttonWithTitle:(id)arg1 backgroundColor:(id)arg2 padding:(long long)arg3;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)refreshButton:(id)arg1 title:(id)arg2;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg1;

@end

