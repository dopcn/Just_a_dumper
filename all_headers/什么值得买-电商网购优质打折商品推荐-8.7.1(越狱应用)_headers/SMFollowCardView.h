//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface SMFollowCardView : UIView
{
    NSDictionary *_followDic;
    CDUnknownBlockType _followBlock;
    CDUnknownBlockType _missBlock;
    CDUnknownBlockType _nextBlock;
    UIView *_vContain;
    UIImageView *_imgvFocus;
    UILabel *_lblTitle;
    UILabel *_lblType;
    UILabel *_lblFollow;
    UILabel *_lbljump;
    UIButton *_btnFollow;
    UIButton *_btnclose;
    UIButton *_btnJump;
}

@property(retain, nonatomic) UIButton *btnJump; // @synthesize btnJump=_btnJump;
@property(retain, nonatomic) UIButton *btnclose; // @synthesize btnclose=_btnclose;
@property(retain, nonatomic) UIButton *btnFollow; // @synthesize btnFollow=_btnFollow;
@property(retain, nonatomic) UILabel *lbljump; // @synthesize lbljump=_lbljump;
@property(retain, nonatomic) UILabel *lblFollow; // @synthesize lblFollow=_lblFollow;
@property(retain, nonatomic) UILabel *lblType; // @synthesize lblType=_lblType;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIImageView *imgvFocus; // @synthesize imgvFocus=_imgvFocus;
@property(retain, nonatomic) UIView *vContain; // @synthesize vContain=_vContain;
@property(copy, nonatomic) CDUnknownBlockType nextBlock; // @synthesize nextBlock=_nextBlock;
@property(copy, nonatomic) CDUnknownBlockType missBlock; // @synthesize missBlock=_missBlock;
@property(copy, nonatomic) CDUnknownBlockType followBlock; // @synthesize followBlock=_followBlock;
@property(retain, nonatomic) NSDictionary *followDic; // @synthesize followDic=_followDic;
- (void).cxx_destruct;
- (void)disMissSelf;
- (void)clickJump;
- (void)clickFollow:(id)arg1;
- (void)resizeFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

