//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectRecipientSectionController;
@protocol IGDirectRecipientCellViewModelProtocol;

@protocol IGDirectRecipientSectionControllerSelectDelegate <NSObject>
- (_Bool)recipientSectionController:(IGDirectRecipientSectionController *)arg1 shouldLongPressViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didLongPressViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didDeselectViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
- (void)recipientSectionController:(IGDirectRecipientSectionController *)arg1 didSelectViewModel:(id <IGDirectRecipientCellViewModelProtocol>)arg2;
@end

