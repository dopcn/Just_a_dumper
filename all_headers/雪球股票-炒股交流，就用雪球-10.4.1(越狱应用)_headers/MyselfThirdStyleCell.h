//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface MyselfThirdStyleCell : UITableViewCell
{
    NSString *_name;
    NSString *_desc;
    UIColor *_descColor;
    NSString *_icon;
    UILabel *_labName;
    UIImageView *_imgIcon;
    UILabel *_labDesc;
    UIImageView *_arrowIcon;
}

@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *labDesc; // @synthesize labDesc=_labDesc;
@property(retain, nonatomic) UIImageView *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(retain, nonatomic) UILabel *labName; // @synthesize labName=_labName;
- (void).cxx_destruct;
- (void)loadData:(id)arg1 icon:(id)arg2 desc:(id)arg3 descColor:(id)arg4 type:(long long)arg5 badge:(id)arg6;
- (void)loadData:(id)arg1 icon:(id)arg2 desc:(id)arg3 descColor:(id)arg4 type:(long long)arg5;
- (void)loadData:(id)arg1 icon:(id)arg2 desc:(id)arg3 type:(long long)arg4;
- (void)loadData:(id)arg1 icon:(id)arg2 desc:(id)arg3 badge:(id)arg4;
- (void)loadData:(id)arg1 icon:(id)arg2 desc:(id)arg3;
- (void)updateTheme:(_Bool)arg1;
- (void)awakeFromNib;

@end

