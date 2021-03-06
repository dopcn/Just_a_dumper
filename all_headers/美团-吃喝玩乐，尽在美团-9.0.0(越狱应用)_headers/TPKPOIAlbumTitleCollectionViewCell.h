//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel;

@interface TPKPOIAlbumTitleCollectionViewCell : UICollectionViewCell
{
    NSString *_level;
    NSString *_title;
    NSString *_moreText;
    NSString *_redirectURL;
    UILabel *_levelLabel;
    UILabel *_titleLabel;
    UILabel *_moreTextLabel;
    UIImageView *_arrowView;
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *moreTextLabel; // @synthesize moreTextLabel=_moreTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

