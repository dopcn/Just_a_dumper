//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NMImageBrowserViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NMImageBrowserViewController, NMSkinTheme, NMWaitingSwitchButton, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView;
@protocol NMSkinThemeDetailViewProtocol;

@interface NMSkinThemeDetailView : UIView <UITableViewDataSource, UITableViewDelegate, NMImageBrowserViewControllerDelegate>
{
    NMSkinTheme *_theme;
    id <NMSkinThemeDetailViewProtocol> _delegate;
    UIScrollView *_bgScrollView;
    UIButton *_operationButton;
    UIImageView *_skinThemeImage;
    UILabel *_skinThemeNameLabel;
    UILabel *_skinThemeSizeLabel;
    UILabel *_skinThemeFeeLabel;
    UITableView *_previewTable;
    UIImageView *_progressView;
    UIImageView *_progressBgView;
    NMImageBrowserViewController *_imageBrowserController;
    UIView *_line1;
    UIView *_line2;
    UILabel *_fixNoticeLabel;
    UILabel *_fixSubNoticeLabel;
    NMWaitingSwitchButton *_switchButton;
    UILabel *_descriptionLabel;
    UIImageView *_pointIconImageView;
    UILabel *_rmbIcon;
    UIImageView *_membershipIcon;
    UILabel *_corpLabel;
    struct CGSize _descriptionLabelSize;
}

@property(retain, nonatomic) UILabel *corpLabel; // @synthesize corpLabel=_corpLabel;
@property(retain, nonatomic) UIImageView *membershipIcon; // @synthesize membershipIcon=_membershipIcon;
@property(retain, nonatomic) UILabel *rmbIcon; // @synthesize rmbIcon=_rmbIcon;
@property(retain, nonatomic) UIImageView *pointIconImageView; // @synthesize pointIconImageView=_pointIconImageView;
@property(nonatomic) struct CGSize descriptionLabelSize; // @synthesize descriptionLabelSize=_descriptionLabelSize;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NMWaitingSwitchButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *fixSubNoticeLabel; // @synthesize fixSubNoticeLabel=_fixSubNoticeLabel;
@property(retain, nonatomic) UILabel *fixNoticeLabel; // @synthesize fixNoticeLabel=_fixNoticeLabel;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line1; // @synthesize line1=_line1;
@property(retain, nonatomic) NMImageBrowserViewController *imageBrowserController; // @synthesize imageBrowserController=_imageBrowserController;
@property(retain, nonatomic) UIImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableView *previewTable; // @synthesize previewTable=_previewTable;
@property(retain, nonatomic) UILabel *skinThemeFeeLabel; // @synthesize skinThemeFeeLabel=_skinThemeFeeLabel;
@property(retain, nonatomic) UILabel *skinThemeSizeLabel; // @synthesize skinThemeSizeLabel=_skinThemeSizeLabel;
@property(retain, nonatomic) UILabel *skinThemeNameLabel; // @synthesize skinThemeNameLabel=_skinThemeNameLabel;
@property(retain, nonatomic) UIImageView *skinThemeImage; // @synthesize skinThemeImage=_skinThemeImage;
@property(retain, nonatomic) UIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(nonatomic) __weak id <NMSkinThemeDetailViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NMSkinTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool useImageAsBackground;
- (void)updateSkinPreview;
- (void)updateSkinTheme:(id)arg1;
- (void)dealloc;
- (void)imageBrowserViewControllerDidClose:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchValueChanged:(id)arg1;
- (void)refreshDownloadProgress;
- (void)useTheme;
- (void)downloadTheme;
- (void)buttonClicked:(id)arg1;
- (void)setOperationButtonAppearance;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)checkScrollable;
- (double)subAreaHeight;
- (void)setNightMode:(id)arg1;
- (void)setSkinThemeFeeLabelContent;
- (void)setSkinThemeImageContent;
- (void)_refreshSwitchPanel;
- (void)_skinUpdateChanged:(id)arg1;
- (void)handleThemechanged:(id)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

