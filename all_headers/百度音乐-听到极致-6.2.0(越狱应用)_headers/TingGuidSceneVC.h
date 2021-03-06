//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GifImageView, NSArray, NSMutableDictionary, UIButton, UIImageView;

@interface TingGuidSceneVC : UIView
{
    CDUnknownBlockType _didFinish;
    UIImageView *_cloudImageView;
    UIImageView *_textImageView;
    GifImageView *_buttonGifImageView;
    UIButton *_firecrackersStart;
    UIImageView *_firecrackersImageView;
    UIImageView *_firecrackersPerson;
    UIButton *_loginBtn;
    UIButton *_shareBtn;
    UIImageView *_shareImageView;
    NSMutableDictionary *_shareDic;
    NSArray *_sceneDataArray;
    UIView *_buttonView;
}

@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) NSArray *sceneDataArray; // @synthesize sceneDataArray=_sceneDataArray;
@property(retain, nonatomic) NSMutableDictionary *shareDic; // @synthesize shareDic=_shareDic;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) UIImageView *firecrackersPerson; // @synthesize firecrackersPerson=_firecrackersPerson;
@property(retain, nonatomic) UIImageView *firecrackersImageView; // @synthesize firecrackersImageView=_firecrackersImageView;
@property(retain, nonatomic) UIButton *firecrackersStart; // @synthesize firecrackersStart=_firecrackersStart;
@property(retain, nonatomic) GifImageView *buttonGifImageView; // @synthesize buttonGifImageView=_buttonGifImageView;
@property(retain, nonatomic) UIImageView *textImageView; // @synthesize textImageView=_textImageView;
@property(retain, nonatomic) UIImageView *cloudImageView; // @synthesize cloudImageView=_cloudImageView;
@property(copy, nonatomic) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
- (void).cxx_destruct;
- (void)actionSceneButton:(id)arg1;
- (void)loadSceneButtons;
- (void)shareClicked:(id)arg1;
- (void)guideViewisFinished:(id)arg1;
- (void)firecrackersImageViewScaleMax;
- (void)firecrackersImageViewExplosion;
- (void)firecrackersImageViewFly;
- (void)firecrackersImageViewStart;
- (void)actionFirecrackersStart;
- (id)initWithFrame:(struct CGRect)arg1;

@end

