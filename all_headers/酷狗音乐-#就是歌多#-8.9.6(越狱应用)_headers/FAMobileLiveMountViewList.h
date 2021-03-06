//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel, UITableView, UIView;

@interface FAMobileLiveMountViewList : FAViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_selfHeadImg;
    long long _roomId;
    long long _sourceType;
    UITableView *_tableView;
    NSArray *_dataArray;
    UIImageView *_rightView;
    UIImageView *_myCarImage;
    UILabel *_myCarNumLbe;
    NSArray *_myMountList;
    UIView *_nilFootView;
    UIImageView *_headImgView;
}

@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIView *nilFootView; // @synthesize nilFootView=_nilFootView;
@property(retain, nonatomic) NSArray *myMountList; // @synthesize myMountList=_myMountList;
@property(retain, nonatomic) UILabel *myCarNumLbe; // @synthesize myCarNumLbe=_myCarNumLbe;
@property(retain, nonatomic) UIImageView *myCarImage; // @synthesize myCarImage=_myCarImage;
@property(retain, nonatomic) UIImageView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *selfHeadImg; // @synthesize selfHeadImg=_selfHeadImg;
- (void).cxx_destruct;
- (void)showNilFootView:(_Bool)arg1;
- (void)getUserInfo;
- (void)jumpToMyMountView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getMyMountView;
- (void)updateSelfMountInfo:(id)arg1;
- (id)sortSelfMountFromMountList:(id)arg1;
- (void)getMyMountList;
- (void)getMountList;
- (void)getListData;
- (void)configSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

