//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewItem.h"

#import "TPKTableViewItemProtocol-Protocol.h"

@class NSString, RACSignal, UIImage;

@interface TPKPOIHeaderAddressItem : TPKTableViewItem <TPKTableViewItemProtocol>
{
    _Bool _hideCellBottomLine;
    RACSignal *_contentSignal;
    UIImage *_tailIcon;
    RACSignal *_descSignal;
    CDUnknownBlockType _longPressedCell;
}

@property(copy, nonatomic) CDUnknownBlockType longPressedCell; // @synthesize longPressedCell=_longPressedCell;
@property(retain, nonatomic) RACSignal *descSignal; // @synthesize descSignal=_descSignal;
@property(retain, nonatomic) UIImage *tailIcon; // @synthesize tailIcon=_tailIcon;
@property(retain, nonatomic) RACSignal *contentSignal; // @synthesize contentSignal=_contentSignal;
@property(nonatomic) _Bool hideCellBottomLine; // @synthesize hideCellBottomLine=_hideCellBottomLine;
- (void).cxx_destruct;
- (long long)selectionStyle;
- (void)bindSignalsWithAddressString:(id)arg1;
- (id)initWithArdessString:(id)arg1;

// Remaining properties
@property(nonatomic) double cellBottomLineMargin;
@property(nonatomic) double cellTopLineMargin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideCellTopLine;
@property(readonly) Class superclass;

@end

