//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface CTLivePrivacySelectTableViewCell : UITableViewCell
{
    long long _currentType;
    long long _selectedType;
    UIView *_selectSelectedView;
    UILabel *_selectTitleLabel;
    UILabel *_selectDescriptionLabel;
    UIView *_separateView;
}

@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UILabel *selectDescriptionLabel; // @synthesize selectDescriptionLabel=_selectDescriptionLabel;
@property(retain, nonatomic) UILabel *selectTitleLabel; // @synthesize selectTitleLabel=_selectTitleLabel;
@property(retain, nonatomic) UIView *selectSelectedView; // @synthesize selectSelectedView=_selectSelectedView;
@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

