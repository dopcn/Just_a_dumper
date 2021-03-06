//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ATLabelTagsView, ATSeriesCourseModel, UILabel, UIView, UserAvatarView;

@interface ATSeriesCourseTableViewCell : UITableViewCell
{
    UIView *_panelView;
    ATLabelTagsView *_tagView;
    UILabel *_contentLabel;
    UserAvatarView *_avatarView;
    UILabel *_teacherNameLabel;
    UILabel *_teachNumLabel;
    double _sepHeight;
    long long _listType;
    ATSeriesCourseModel *_model;
}

@property(retain, nonatomic) ATSeriesCourseModel *model; // @synthesize model=_model;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) double sepHeight; // @synthesize sepHeight=_sepHeight;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;

@end

