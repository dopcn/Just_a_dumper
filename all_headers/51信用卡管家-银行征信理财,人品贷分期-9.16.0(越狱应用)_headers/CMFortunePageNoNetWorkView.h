//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface CMFortunePageNoNetWorkView : UIView
{
    CDUnknownBlockType _reTryLoadData;
    UIButton *_retryButton;
}

@property(nonatomic) __weak UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(copy, nonatomic) CDUnknownBlockType reTryLoadData; // @synthesize reTryLoadData=_reTryLoadData;
- (void).cxx_destruct;
- (void)retryClick:(id)arg1;
- (void)awakeFromNib;

@end

