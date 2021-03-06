//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDTableViewCell.h"

#import "CDBindPhoneFloatViewDelegate-Protocol.h"

@class NSString;

@interface CDPersonalBindPhoneTipsCell : CDTableViewCell <CDBindPhoneFloatViewDelegate>
{
    CDUnknownBlockType _bindPhoneClickedCallback;
    CDUnknownBlockType _closeClickedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType closeClickedCallback; // @synthesize closeClickedCallback=_closeClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType bindPhoneClickedCallback; // @synthesize bindPhoneClickedCallback=_bindPhoneClickedCallback;
- (void).cxx_destruct;
- (void)bindCloseAction;
- (void)bindPhoneAction;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

