//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, XSTMeSetModel;

@interface XSTMeSetTableViewCell : UITableViewCell
{
    float _folderSize;
    UILabel *_name;
    UILabel *_cache;
    UIView *_line;
    UIImageView *_rightImageView;
    XSTMeSetModel *_model;
}

@property(nonatomic) float folderSize; // @synthesize folderSize=_folderSize;
@property(retain, nonatomic) XSTMeSetModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)folderSizeAtPath:(id)arg1;
- (long long)fileSizeAtPath:(id)arg1;
- (void)layoutSubviews;
- (void)initXSTMeSetTableViewCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

