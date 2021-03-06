//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QZEVEditPanel.h"

#import "QZEVEditSelectionBarDelegate-Protocol.h"

@class NSString, QZEVEditFilterSelectionBar, QZEVFilterPicker;

@interface QZEVEditFilterView : QZEVEditPanel <QZEVEditSelectionBarDelegate>
{
    QZEVFilterPicker *_filterPicker;
    CDUnknownBlockType _willDismiss;
    CDUnknownBlockType _didSelectFilter;
    QZEVEditFilterSelectionBar *_selectionBar;
}

+ (double)preferredHeight;
@property(nonatomic) __weak QZEVEditFilterSelectionBar *selectionBar; // @synthesize selectionBar=_selectionBar;
@property(copy, nonatomic) CDUnknownBlockType didSelectFilter; // @synthesize didSelectFilter=_didSelectFilter;
@property(copy, nonatomic) CDUnknownBlockType willDismiss; // @synthesize willDismiss=_willDismiss;
@property(nonatomic) QZEVFilterPicker *filterPicker; // @synthesize filterPicker=_filterPicker;
- (void).cxx_destruct;
- (void)selectFilterWithFilterID:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willDismissByAction:(long long)arg1;
- (void)initUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

