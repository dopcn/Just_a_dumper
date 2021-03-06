//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, UIImageView, UILabel;

@interface EaseBubbleView : UIView
{
    struct UIEdgeInsets _margin;
    double _fileIconSize;
    _Bool _isSender;
    UIImageView *_backgroundImageView;
    NSMutableArray *_marginConstraints;
    UILabel *_textLabel;
    UIImageView *_imageView;
    UIImageView *_locationImageView;
    UILabel *_locationLabel;
    UIImageView *_voiceImageView;
    UILabel *_voiceDurationLabel;
    UIImageView *_isReadView;
    UIImageView *_videoImageView;
    UIImageView *_videoTagView;
    UIImageView *_fileIconView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    NSLayoutConstraint *_marginTopConstraint;
    NSLayoutConstraint *_marginBottomConstraint;
    NSLayoutConstraint *_marginLeftConstraint;
    NSLayoutConstraint *_marginRightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *marginRightConstraint; // @synthesize marginRightConstraint=_marginRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *marginLeftConstraint; // @synthesize marginLeftConstraint=_marginLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *marginBottomConstraint; // @synthesize marginBottomConstraint=_marginBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *marginTopConstraint; // @synthesize marginTopConstraint=_marginTopConstraint;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileIconView; // @synthesize fileIconView=_fileIconView;
@property(retain, nonatomic) UIImageView *videoTagView; // @synthesize videoTagView=_videoTagView;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIImageView *isReadView; // @synthesize isReadView=_isReadView;
@property(retain, nonatomic) UILabel *voiceDurationLabel; // @synthesize voiceDurationLabel=_voiceDurationLabel;
@property(retain, nonatomic) UIImageView *voiceImageView; // @synthesize voiceImageView=_voiceImageView;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSMutableArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(readonly, nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)_setupBackgroundImageViewConstraints;
- (id)initWithMargin:(struct UIEdgeInsets)arg1 isSender:(_Bool)arg2;
- (void)updateLocationMargin:(struct UIEdgeInsets)arg1;
- (void)setupLocationBubbleView;
- (void)_setupLocationBubbleConstraints;
- (void)_setupLocationBubbleMarginConstraints;
- (void)layoutSubviews;
- (void)updateVoiceMargin:(struct UIEdgeInsets)arg1;
- (void)setupVoiceBubbleView;
- (void)_setupVoiceBubbleConstraints;
- (void)_setupVoiceBubbleMarginConstraints;
- (void)updateGifMargin:(struct UIEdgeInsets)arg1;
- (void)setupGifBubbleView;
- (void)_setupImageBubbleConstraints;
- (void)_setupImageBubbleMarginConstraints;
- (void)updateTextMargin:(struct UIEdgeInsets)arg1;
- (void)setupTextBubbleView;
- (void)_setupTextBubbleConstraints;
- (void)_setupTextBubbleMarginConstraints;
- (void)updateImageMargin:(struct UIEdgeInsets)arg1;
- (void)setupImageBubbleView;
- (void)_setupImageBubbleConstraints;
- (void)_setupImageBubbleMarginConstraints;
- (void)updateVideoMargin:(struct UIEdgeInsets)arg1;
- (void)setupVideoBubbleView;
- (void)_setupVideoBubbleConstraints;
- (void)_setupVideoBubbleMarginConstraints;
- (void)updateFileMargin:(struct UIEdgeInsets)arg1;
- (void)setupFileBubbleView;
- (void)_setupFileBubbleConstraints;
- (void)_setupFileBubbleMarginConstraints;

@end

