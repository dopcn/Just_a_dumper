//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface CoverView : UIImageView
{
    UIImageView *_bottomView;
}

@property(retain) UIImageView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)imageChanged:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)hideBottomView;
- (void)addBottomView;
- (void)addMaskView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

