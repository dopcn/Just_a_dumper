//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CorePlayer.h"

#import "QNDialectPlayerFeature-Protocol.h"

@class QNDialectModel;

@interface QNDialectPlayer : CorePlayer <QNDialectPlayerFeature>
{
    QNDialectModel *_dialectModel;
}

@property(retain, nonatomic) QNDialectModel *dialectModel; // @synthesize dialectModel=_dialectModel;
- (void).cxx_destruct;
- (void)playURL:(id)arg1;
- (void)playDialectMode:(id)arg1;
- (id)initWithModuleManager:(Class)arg1;

// Remaining properties
@property(nonatomic) _Bool allowAirPlay;
@property(nonatomic) _Bool scaleFill;

@end

