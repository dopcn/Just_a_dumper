//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "KSCoursePlanCardTableViewCellDelegate-Protocol.h"
#import "KSCoursePlanCurrentCardTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSCoursePlanSingleDayModel, NSString, UITableView;

@interface KSCoursePlanCardCollectionViewCell : UICollectionViewCell <UITableViewDataSource, UITableViewDelegate, KSCoursePlanCardTableViewCellDelegate, KSCoursePlanCurrentCardTableViewCellDelegate>
{
    _Bool _isCurrentDay;
    KSCoursePlanSingleDayModel *_model;
    long long _showPlanIndex;
    long long _currentIndex;
    NSString *_courseTitle;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *courseTitle; // @synthesize courseTitle=_courseTitle;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long showPlanIndex; // @synthesize showPlanIndex=_showPlanIndex;
@property(nonatomic) _Bool isCurrentDay; // @synthesize isCurrentDay=_isCurrentDay;
@property(retain, nonatomic) KSCoursePlanSingleDayModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)reloadCellTableView;
- (void)scrollToTargetIndex:(long long)arg1;
- (void)playFinishAnimationWithIndex:(long long)arg1;
- (void)onCourseCardClickedWithCell:(id)arg1;
- (id)getDownloadDataWithFileId:(id)arg1;
- (id)percentWithTotalTimeFormatString:(id)arg1 currentSeconds:(double)arg2;
- (id)setUpAttributedStringWith:(id)arg1 fontSize:(long long)arg2 color:(id)arg3 lineSpacing:(double)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableViewHeaderView;
- (void)setTheme;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

