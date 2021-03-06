//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, QYGLContributionListTopThreeView, UIButton;
@protocol QYGLContributionListHeaderViewDelegate;

@interface QYGLContributionListTableHeaderView : UIView
{
    id <QYGLContributionListHeaderViewDelegate> _delegate;
    NSArray *_listTypeArray;
    QYGLContributionListTopThreeView *_firstUserView;
    QYGLContributionListTopThreeView *_secondUserView;
    QYGLContributionListTopThreeView *_thirdUserView;
    UIView *_buttonsView;
    UIButton *_lastItem;
    NSMutableArray *_topThreeUserListArray;
}

@property(retain, nonatomic) NSMutableArray *topThreeUserListArray; // @synthesize topThreeUserListArray=_topThreeUserListArray;
@property(retain, nonatomic) UIButton *lastItem; // @synthesize lastItem=_lastItem;
@property(retain, nonatomic) UIView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain, nonatomic) QYGLContributionListTopThreeView *thirdUserView; // @synthesize thirdUserView=_thirdUserView;
@property(retain, nonatomic) QYGLContributionListTopThreeView *secondUserView; // @synthesize secondUserView=_secondUserView;
@property(retain, nonatomic) QYGLContributionListTopThreeView *firstUserView; // @synthesize firstUserView=_firstUserView;
@property(retain, nonatomic) NSArray *listTypeArray; // @synthesize listTypeArray=_listTypeArray;
@property(nonatomic) id <QYGLContributionListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateForTopThreeContributors:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clickContributionListButton:(id)arg1;

@end

