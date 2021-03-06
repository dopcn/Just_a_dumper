//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MLMetadataTrackEffectProtocol-Protocol.h"

@class MLMediaEffectRepresentation, NSString, NSUUID;

@interface MLMetadataTrackEffect : MTLModel <MLMetadataTrackEffectProtocol>
{
    NSUUID *_identifier;
    NSString *_metadataTrackIdentifier;
    MLMediaEffectRepresentation *_representation;
    CDStruct_e83c9415 _timeRange;
}

@property(readonly, copy, nonatomic) MLMediaEffectRepresentation *representation; // @synthesize representation=_representation;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, copy, nonatomic) NSString *metadataTrackIdentifier; // @synthesize metadataTrackIdentifier=_metadataTrackIdentifier;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)effectByReplacingRepresentation:(id)arg1;
- (id)effectByReplacingTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithMetadataTrackIdentifier:(id)arg1 representation:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

