//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttFileContentCollectionView, MttFileContentTableView, MttSegmentedControl, UIButton, UILabel;

@interface MttFileManagerMainView : UIView
{
    long long _fileGroupType;
    MttFileContentCollectionView *_contentCollectionView;
    MttFileContentTableView *_contentTableView;
    MttSegmentedControl *_switchControl;
    UIView *_authorizeView;
    UILabel *_emptyLabel;
    UIButton *_gotoAuthorize;
    UILabel *_diskInfoLabel;
}

@property(retain, nonatomic) UILabel *diskInfoLabel; // @synthesize diskInfoLabel=_diskInfoLabel;
@property(retain, nonatomic) UIButton *gotoAuthorize; // @synthesize gotoAuthorize=_gotoAuthorize;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UIView *authorizeView; // @synthesize authorizeView=_authorizeView;
@property(retain, nonatomic) MttSegmentedControl *switchControl; // @synthesize switchControl=_switchControl;
@property(retain, nonatomic) MttFileContentTableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) MttFileContentCollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(nonatomic) long long fileGroupType; // @synthesize fileGroupType=_fileGroupType;
- (void).cxx_destruct;
- (id)getDiskInfo:(long long)arg1;
- (id)diskInfoStr;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

