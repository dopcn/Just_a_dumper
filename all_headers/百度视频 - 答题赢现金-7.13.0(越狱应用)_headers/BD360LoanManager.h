//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QihooHybridZip-Protocol.h"

@class NSString;

@interface BD360LoanManager : NSObject <QihooHybridZip>
{
}

+ (void)push360LoanHomeVCWithRootViewController:(id)arg1;
+ (_Bool)is360LoanUrl:(id)arg1;
+ (id)manager;
- (_Bool)filePath:(id)arg1 unZipToPath:(id)arg2;
- (id)getNavigationControllerFromRootVC:(id)arg1;
- (void)push360LoanHomeVCWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

