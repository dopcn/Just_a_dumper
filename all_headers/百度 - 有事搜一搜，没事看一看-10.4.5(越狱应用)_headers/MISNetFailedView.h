//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MISNetFailedView : UIView
{
    CDUnknownBlockType _retryBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
- (void).cxx_destruct;
- (void)retryButtonWasClick:(id)arg1;
- (id)retryButtonConstrains:(id)arg1 tipLabel:(id)arg2;
- (id)tipLabelConstrains:(id)arg1;
- (id)netImageViewConstrains:(id)arg1 tipLabel:(id)arg2;
- (void)setupSubviews;
- (void)setRetryButtonClickBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

