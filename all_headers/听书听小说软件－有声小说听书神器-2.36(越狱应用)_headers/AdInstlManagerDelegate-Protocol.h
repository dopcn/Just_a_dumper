//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AdInstlManager, NSError;

@protocol AdInstlManagerDelegate <NSObject>

@optional
- (_Bool)adInstlUsingSKStoreProductViewController;
- (_Bool)adInstlUsingHtml5;
- (_Bool)adInstlOpenGps;
- (_Bool)adInstlLogMode;
- (_Bool)adInstlTestMode;
- (void)adInstlManager:(AdInstlManager *)arg1 didGetEvent:(int)arg2 error:(NSError *)arg3;
@end

