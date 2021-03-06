//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class KWPopoverController, UIBarButtonItem, UIButton, UIView;

@protocol KSOMoreDropdownBox
@property(readonly, nonatomic) UIButton *printButton;
@property(readonly, nonatomic) UIButton *sharePlayButton;
@property(readonly, nonatomic) UIButton *sendMailButton;
@property(readonly, nonatomic) UIButton *remarkButton;
@property(readonly, nonatomic) UIButton *saveAsButton;
- (void)shareWithFriendsState:(_Bool)arg1;
- (void)exprotPDFState:(_Bool)arg1;
- (void)setRemarkSwitchEnable:(_Bool)arg1;
- (void)setMailBtnState:(_Bool)arg1;
- (void)setFindAndReplaceState:(_Bool)arg1;
- (_Bool)isShowingDropdownBox;
- (void)hideMoreDropdownBox;
- (void)updateFromRect:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)showFromBarButtonItem:(UIBarButtonItem *)arg1;
- (void)showFromRect:(struct CGRect)arg1 inView:(UIView *)arg2;
- (KWPopoverController *)getPopOverController;
- (id)popoverControllerForPop;
- (void)willShowFromMode:(_Bool)arg1;
@end

