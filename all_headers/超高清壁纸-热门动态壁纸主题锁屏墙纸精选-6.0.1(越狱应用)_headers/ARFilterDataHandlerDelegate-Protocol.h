//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWBaseDataHandlerDelegate-Protocol.h"

@class ARFilterDataHandler, NSError;

@protocol ARFilterDataHandlerDelegate <AWBaseDataHandlerDelegate>
- (void)didLoadFilterListFail:(ARFilterDataHandler *)arg1 error:(NSError *)arg2;
- (void)didLoadFilterListFinished:(ARFilterDataHandler *)arg1 responseObject:(id)arg2;
- (void)didLoadFilterListStart:(ARFilterDataHandler *)arg1;
@end

