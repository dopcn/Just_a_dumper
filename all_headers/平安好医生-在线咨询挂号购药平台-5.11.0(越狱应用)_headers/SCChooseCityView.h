//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SCSearchLocationCityModel, UIImageView, UILabel, UITableView;
@protocol SCChooseCityDelegate;

@interface SCChooseCityView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <SCChooseCityDelegate> _delegate;
    UIImageView *_locationImg;
    UILabel *_locationCity;
    UIView *_backView;
    UIView *_tableBackView;
    UITableView *_provincesTableView;
    UITableView *_citiesTableView;
    SCSearchLocationCityModel *_locationCityModel;
    long long _selectProvinceIndex;
    NSDictionary *_selectedCityDic;
    NSMutableArray *_provincesArr;
    NSMutableArray *_currentCitiesArr;
}

@property(retain, nonatomic) NSMutableArray *currentCitiesArr; // @synthesize currentCitiesArr=_currentCitiesArr;
@property(retain, nonatomic) NSMutableArray *provincesArr; // @synthesize provincesArr=_provincesArr;
@property(retain, nonatomic) NSDictionary *selectedCityDic; // @synthesize selectedCityDic=_selectedCityDic;
@property(nonatomic) long long selectProvinceIndex; // @synthesize selectProvinceIndex=_selectProvinceIndex;
@property(retain, nonatomic) SCSearchLocationCityModel *locationCityModel; // @synthesize locationCityModel=_locationCityModel;
@property(retain, nonatomic) UITableView *citiesTableView; // @synthesize citiesTableView=_citiesTableView;
@property(retain, nonatomic) UITableView *provincesTableView; // @synthesize provincesTableView=_provincesTableView;
@property(retain, nonatomic) UIView *tableBackView; // @synthesize tableBackView=_tableBackView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *locationCity; // @synthesize locationCity=_locationCity;
@property(retain, nonatomic) UIImageView *locationImg; // @synthesize locationImg=_locationImg;
@property(nonatomic) id <SCChooseCityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showMBProgressHUDWithInfo:(id)arg1;
- (void)getCityCodeForLocationLatitude:(double)arg1 longitude:(double)arg2;
- (void)tapTryAgain;
- (void)tapBgAction;
- (void)tapLocationCity;
- (void)resetTableWithChooseCity:(id)arg1;
- (void)createTableView;
- (void)createHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

