//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface OMGH5TestItemCell : UITableViewCell
{
    _Bool _hasClicked;
    UIImageView *_thumbnailView;
    UILabel *_visitLabel;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_updateLabel;
    UILabel *_endLabel;
    UIView *_markView;
}

@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool hasClicked; // @synthesize hasClicked=_hasClicked;
@property(retain, nonatomic) UILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *visitLabel; // @synthesize visitLabel=_visitLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

