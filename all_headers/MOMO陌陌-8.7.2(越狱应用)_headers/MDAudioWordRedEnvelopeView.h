//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class MDRedEnvelopProfile, UIButton, UILabel, UIView;
@protocol MDAudioWordRedEnvelopeViewProtocol;

@interface MDAudioWordRedEnvelopeView : UIImageView
{
    _Bool _isRecording;
    id <MDAudioWordRedEnvelopeViewProtocol> _deletage;
    UIImageView *_backImageView;
    UIButton *_returnButton;
    UIView *_avatarBackView;
    UIImageView *_avatarImageView;
    UIImageView *_recordIconImg;
    UILabel *_commandLabel;
    UILabel *_fromLabel;
    UIButton *_recordButton;
    UIButton *_protocolButton;
    UILabel *_protocolLab;
    MDRedEnvelopProfile *_model;
    UIImageView *_recordBackImgView;
}

@property(retain, nonatomic) UIImageView *recordBackImgView; // @synthesize recordBackImgView=_recordBackImgView;
@property(retain, nonatomic) MDRedEnvelopProfile *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *protocolLab; // @synthesize protocolLab=_protocolLab;
@property(retain, nonatomic) UIButton *protocolButton; // @synthesize protocolButton=_protocolButton;
@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) UILabel *commandLabel; // @synthesize commandLabel=_commandLabel;
@property(retain, nonatomic) UIImageView *recordIconImg; // @synthesize recordIconImg=_recordIconImg;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarBackView; // @synthesize avatarBackView=_avatarBackView;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak id <MDAudioWordRedEnvelopeViewProtocol> deletage; // @synthesize deletage=_deletage;
- (void).cxx_destruct;
- (void)protocolLabClick;
- (void)btnTouchUpleave:(id)arg1;
- (void)btnTouchDown:(id)arg1;
- (void)forceStopRecording;
- (void)beginRotateAvatarAnimation;
- (void)removeEvent;
- (void)setupWithDicModele:(id)arg1;
- (void)updateVoiceVolume:(long long)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

