//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSXibView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSCloumnListCourseAlbumModel, KSSingleThinLabel, NSLayoutConstraint, NSString, UIButton, UILabel, UITableView, UIView;
@protocol KSColumnListCourseAlbumViewDelegate;

@interface KSColumnListCourseAlbumView : KSXibView <UITableViewDelegate, UITableViewDataSource>
{
    KSCloumnListCourseAlbumModel *_courseAlbumModel;
    id <KSColumnListCourseAlbumViewDelegate> _delegate;
    UILabel *_totalAlbumLabel;
    UITableView *_tableView;
    UIButton *_checkAllAlbumButton;
    UIView *_sepreatorView;
    KSSingleThinLabel *_seperatorTopLabel;
    KSSingleThinLabel *_seperatorBottomLabel;
    NSLayoutConstraint *_checkAllAlbumButtonHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *checkAllAlbumButtonHeightConstraint; // @synthesize checkAllAlbumButtonHeightConstraint=_checkAllAlbumButtonHeightConstraint;
@property(nonatomic) __weak KSSingleThinLabel *seperatorBottomLabel; // @synthesize seperatorBottomLabel=_seperatorBottomLabel;
@property(nonatomic) __weak KSSingleThinLabel *seperatorTopLabel; // @synthesize seperatorTopLabel=_seperatorTopLabel;
@property(nonatomic) __weak UIView *sepreatorView; // @synthesize sepreatorView=_sepreatorView;
@property(nonatomic) __weak UIButton *checkAllAlbumButton; // @synthesize checkAllAlbumButton=_checkAllAlbumButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UILabel *totalAlbumLabel; // @synthesize totalAlbumLabel=_totalAlbumLabel;
@property(nonatomic) __weak id <KSColumnListCourseAlbumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KSCloumnListCourseAlbumModel *courseAlbumModel; // @synthesize courseAlbumModel=_courseAlbumModel;
- (void).cxx_destruct;
- (void)checkAllAlbumButtonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)awakeFromNib;
- (void)setTheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

