//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ATTeachersListView, ATTeachersModel;

@interface ATTeachersListCollectionCell : UICollectionViewCell
{
    ATTeachersListView *_teachersListView;
    ATTeachersModel *_model;
}

@property(retain, nonatomic) ATTeachersModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) ATTeachersListView *teachersListView; // @synthesize teachersListView=_teachersListView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

