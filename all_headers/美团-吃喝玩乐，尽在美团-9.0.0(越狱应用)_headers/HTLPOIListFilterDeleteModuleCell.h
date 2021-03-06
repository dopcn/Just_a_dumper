//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HTLPOIListFilterDeleteViewModel, NSArray, NSNumber, UIImageView, UILabel;

@interface HTLPOIListFilterDeleteModuleCell : UITableViewCell
{
    double _cellHeight;
    HTLPOIListFilterDeleteViewModel *_viewModel;
    NSArray *_deleteTags;
    UILabel *_promptLabel;
    UIImageView *_questionMarkImageView;
    NSNumber *_hasSearchResults;
    NSArray *_allFilterSelectDicts;
}

@property(retain, nonatomic) NSArray *allFilterSelectDicts; // @synthesize allFilterSelectDicts=_allFilterSelectDicts;
@property(retain, nonatomic) NSNumber *hasSearchResults; // @synthesize hasSearchResults=_hasSearchResults;
@property(retain, nonatomic) UIImageView *questionMarkImageView; // @synthesize questionMarkImageView=_questionMarkImageView;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) NSArray *deleteTags; // @synthesize deleteTags=_deleteTags;
@property(retain, nonatomic) HTLPOIListFilterDeleteViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)updateUI;
- (void)setupUI;
- (void)bind;
- (id)initWithViewModel:(id)arg1;

@end

