//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "YXEmojiGameShareWayViewDelegate-Protocol.h"

@class NSString, UIButton, UIView, YXEmojiGameGradeModel, YXEmojiGameGradeShareTopView, YXEmojiGameShareContentView, YXEmojiGameShareWayView;

@interface YXEmojiGameGradeShareViewController : YXUIViewController <YXEmojiGameShareWayViewDelegate>
{
    UIView *_shareBackView;
    UIButton *_closeBrn;
    YXEmojiGameGradeShareTopView *_shareTopView;
    YXEmojiGameShareContentView *_shareContentView;
    YXEmojiGameShareWayView *_shareWayView;
    YXEmojiGameGradeModel *_gradeModel;
}

@property(retain, nonatomic) YXEmojiGameGradeModel *gradeModel; // @synthesize gradeModel=_gradeModel;
@property(retain, nonatomic) YXEmojiGameShareWayView *shareWayView; // @synthesize shareWayView=_shareWayView;
@property(retain, nonatomic) YXEmojiGameShareContentView *shareContentView; // @synthesize shareContentView=_shareContentView;
@property(retain, nonatomic) YXEmojiGameGradeShareTopView *shareTopView; // @synthesize shareTopView=_shareTopView;
@property(retain, nonatomic) UIButton *closeBrn; // @synthesize closeBrn=_closeBrn;
@property(retain, nonatomic) UIView *shareBackView; // @synthesize shareBackView=_shareBackView;
- (void).cxx_destruct;
- (void)emojiShare:(id)arg1;
- (id)captureView:(id)arg1;
- (id)qrCodeViewWithDataString:(id)arg1;
- (void)closeShareViewAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldShowBarBottomLine;
- (_Bool)shouldShowNavigationBar;
- (_Bool)extendedLayoutNone;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithEmojiGameGradeShareModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

