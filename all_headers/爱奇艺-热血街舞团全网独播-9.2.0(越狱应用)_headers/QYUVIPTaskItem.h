//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYBisonAlbum, QYUCardBaseCell;

@interface QYUVIPTaskItem : UIView
{
    QYBisonAlbum *_bisonAlbum;
    QYUCardBaseCell *_baseCell;
}

@property(nonatomic) __weak QYUCardBaseCell *baseCell; // @synthesize baseCell=_baseCell;
@property(retain, nonatomic) QYBisonAlbum *bisonAlbum; // @synthesize bisonAlbum=_bisonAlbum;
- (void).cxx_destruct;
- (void)tapWithTag:(unsigned long long)arg1;
- (void)tapMore;
- (void)tapContentArea;
- (id)initWithFrame:(struct CGRect)arg1 bisonAlbum:(id)arg2 column:(unsigned long long)arg3 cell:(id)arg4;

@end

