//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class QYBisonAlbum;

@interface QYUTouchCell : QYUPhoneCardBaseCell
{
    double _defaultWidth;
    QYBisonAlbum *_bisonAlbum;
}

@property(retain, nonatomic) QYBisonAlbum *bisonAlbum; // @synthesize bisonAlbum=_bisonAlbum;
@property(nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
- (void).cxx_destruct;
- (void)onClickCell:(id)arg1;
- (void)registerTapGesture;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

