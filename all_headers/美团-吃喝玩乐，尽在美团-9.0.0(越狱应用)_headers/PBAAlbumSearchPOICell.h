//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PBAAlbumSearchPOIInfo, UILabel, UIView;

@interface PBAAlbumSearchPOICell : UITableViewCell
{
    _Bool _hideSperator;
    PBAAlbumSearchPOIInfo *_poiInf;
    UILabel *_poiNameLabel;
    UILabel *_addAlbumTipLable;
    UILabel *_addressLable;
    UIView *_separator;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *addressLable; // @synthesize addressLable=_addressLable;
@property(retain, nonatomic) UILabel *addAlbumTipLable; // @synthesize addAlbumTipLable=_addAlbumTipLable;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(nonatomic) _Bool hideSperator; // @synthesize hideSperator=_hideSperator;
@property(retain, nonatomic) PBAAlbumSearchPOIInfo *poiInf; // @synthesize poiInf=_poiInf;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

