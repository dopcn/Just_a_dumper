//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTTourBaseCell.h"

@class UILabel;

@interface CTTourHomeLocalCell : CTTourBaseCell
{
    UILabel *_titleLabel;
    UILabel *_subLabel;
}

+ (double)cellHeight:(id)arg1 extraInfo:(id)arg2;
@property(nonatomic) __weak UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)styl2WithTitle:(id)arg1 subTitle:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 dataSource:(id)arg4 parentVC:(id)arg5;
- (id)attrStringWithText:(id)arg1 color:(unsigned int)arg2 fontSize:(int)arg3;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

