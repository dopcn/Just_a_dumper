//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUCardLineBaseCell.h"

#import "QYMessageCenterDelegate-Protocol.h"

@class NSString, QYUBaseBlock;

@interface QYUCardLineType9 : QYUCardLineBaseCell <QYMessageCenterDelegate>
{
    QYUBaseBlock *firstBlock;
    double lineH0;
    double lineH1;
    double blockWidth;
}

+ (double)getHeightByData:(id)arg1 row:(unsigned long long)arg2 ratio:(id)arg3 cardData:(id)arg4;
- (void).cxx_destruct;
- (void)setBgImgWithURL:(id)arg1 needBlur:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)layoutSubviews;
- (void)buildUI;
- (void)preReload;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

