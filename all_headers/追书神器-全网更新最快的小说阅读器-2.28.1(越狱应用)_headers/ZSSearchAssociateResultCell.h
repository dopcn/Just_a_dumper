//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIImageView, UILabel;

@interface ZSSearchAssociateResultCell : UITableViewCell
{
    UIImageView *_resultTagImgView;
    UILabel *_resultTextLabel;
    NSMutableArray *_tagViews;
}

@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(retain, nonatomic) UILabel *resultTextLabel; // @synthesize resultTextLabel=_resultTextLabel;
@property(retain, nonatomic) UIImageView *resultTagImgView; // @synthesize resultTagImgView=_resultTagImgView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fillCellWithAssociateItem:(id)arg1;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

