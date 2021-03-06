//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBBaseVC.h"

#import "SNBShareSheetDelegate-Protocol.h"
#import "SNBSubjectDetailDataSourceDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SNBAnimationTitleView, SNBSubject, SNBSubjectDetailDataSource, SNBSubjectDetailHeaderView, UIImageView, UITableView, UIView;

@interface SNBSubjectDetailViewController : SNBBaseVC <UITableViewDelegate, SNBShareSheetDelegate, SNBSubjectDetailDataSourceDelegate>
{
    SNBSubject *_subject;
    NSString *_subjectID;
    UITableView *_tableView;
    UIImageView *_backgroundImageView;
    UIView *_maskBackgroundView;
    SNBAnimationTitleView *_titleView;
    SNBSubjectDetailDataSource *_dataSource;
    SNBSubjectDetailHeaderView *_headerView;
    NSString *_shareData;
    NSString *_shareText;
    NSString *_shareURL;
    double _viewHeight;
    struct CGSize _imageSize;
}

@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) NSString *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) SNBSubjectDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SNBSubjectDetailDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SNBAnimationTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *maskBackgroundView; // @synthesize maskBackgroundView=_maskBackgroundView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *subjectID; // @synthesize subjectID=_subjectID;
@property(retain, nonatomic) SNBSubject *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shareToTimeline:(id)arg1;
- (void)sharesSubjectWithStatus;
- (void)_snb_updateHeaderHeight;
- (void)_snb_changeOrientation:(id)arg1;
- (void)_snb_loadShareContent;
- (void)_snb_configObserver;
- (void)_snb_configConstraints;
- (void)_snb_configSubviews;
- (id)initWithSubjectID:(id)arg1;
- (void)updateTheme:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

