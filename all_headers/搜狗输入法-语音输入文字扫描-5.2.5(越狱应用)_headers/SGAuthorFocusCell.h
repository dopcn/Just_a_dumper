//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSString, UIImage, UIImageView, UILabel, UIView;

@interface SGAuthorFocusCell : UITableViewCell
{
    UIView *_backgroundView;
    UIImageView *_bgImageView;
    UIImageView *_iconImageView;
    UILabel *_labelTitle;
    UILabel *_labelIntro;
    double _margins;
    UIView *_lineView;
    NSDictionary *_pkgAutorDict;
    NSString *_author_id;
    UIImage *_placeHolder;
    UIImage *_borderImage;
    UIImage *_highlightedeBorderImage;
}

@property(retain, nonatomic) UIImage *highlightedeBorderImage; // @synthesize highlightedeBorderImage=_highlightedeBorderImage;
@property(retain, nonatomic) UIImage *borderImage; // @synthesize borderImage=_borderImage;
@property(retain, nonatomic) UIImage *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *author_id; // @synthesize author_id=_author_id;
@property(retain, nonatomic) NSDictionary *pkgAutorDict; // @synthesize pkgAutorDict=_pkgAutorDict;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithNoType;

@end

