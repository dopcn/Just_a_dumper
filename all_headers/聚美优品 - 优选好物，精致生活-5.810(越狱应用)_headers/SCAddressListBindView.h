//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface SCAddressListBindView : UIView
{
    CDUnknownBlockType _getUserBlock;
    CDUnknownBlockType _getFailureBlock;
    UIImageView *_imageVIew;
    UIButton *_bindBtn;
}

@property(retain, nonatomic) UIButton *bindBtn; // @synthesize bindBtn=_bindBtn;
@property(retain, nonatomic) UIImageView *imageVIew; // @synthesize imageVIew=_imageVIew;
@property(copy, nonatomic) CDUnknownBlockType getFailureBlock; // @synthesize getFailureBlock=_getFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType getUserBlock; // @synthesize getUserBlock=_getUserBlock;
- (void).cxx_destruct;
- (void)buttonSlot:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

