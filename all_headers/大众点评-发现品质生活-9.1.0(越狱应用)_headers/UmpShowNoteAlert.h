//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface UmpShowNoteAlert : UIControl
{
    UIImageView *_bottomImage;
    UIImageView *_centerImage;
    UILabel *_showLabel;
}

+ (id)shareInstance;
- (void)dealloc;
- (float)heightForString:(id)arg1 fontSize:(float)arg2 andWidth:(float)arg3;
- (void)setupShowViewCGRect:(struct CGRect)arg1 infoStr:(id)arg2 fontSize:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

