//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QZFeedPhotoView, UIImageView;

@interface QzoneFeedLiveBubble : UIView
{
    UIView *_label;
    QZFeedPhotoView *_icon;
    UIImageView *_backgroundImage;
}

- (void).cxx_destruct;
- (void)initContentWithNick:(id)arg1 message:(id)arg2 iconUrl:(id)arg3 isAnchor:(_Bool)arg4 bubbleMaxWidth:(double)arg5;
- (id)labelWithNick:(id)arg1 message:(id)arg2 isAnchor:(_Bool)arg3 hasIcon:(_Bool)arg4 bubbleMaxWidth:(double)arg5;
- (id)initWithLiveMsg:(id)arg1 anchorUin:(long long)arg2 maxWidth:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

