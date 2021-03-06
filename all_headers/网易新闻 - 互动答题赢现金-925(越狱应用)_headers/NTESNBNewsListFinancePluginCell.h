//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NTESNBNewsListBaseCell.h"

@class NSArray, NSDictionary, NTESNBNewsListFinancePluginView;

@interface NTESNBNewsListFinancePluginCell : NTESNBNewsListBaseCell
{
    NSDictionary *_pluginInfo;
    NSArray *_pluginList;
    NTESNBNewsListFinancePluginView *_pluginView;
}

+ (_Bool)isInDayTime;
+ (void)requestFinancePluginDataWithCompletion:(CDUnknownBlockType)arg1;
+ (double)cellHeightWithContent:(id)arg1;
@property(retain, nonatomic) NTESNBNewsListFinancePluginView *pluginView; // @synthesize pluginView=_pluginView;
@property(retain, nonatomic) NSArray *pluginList; // @synthesize pluginList=_pluginList;
@property(retain, nonatomic) NSDictionary *pluginInfo; // @synthesize pluginInfo=_pluginInfo;
- (void).cxx_destruct;
- (_Bool)useBasicViews;
- (void)fillContent:(id)arg1 as:(id)arg2 atIndexPath:(id)arg3;
- (void)updateColorThemeIfNeeded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

