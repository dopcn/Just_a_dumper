//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMComponent.h"

#import "FMCardParserProtocol-Protocol.h"

@class FMPersonalListActionSignatureModel, NSString;

@interface FMPersonalListSignatureComponent : FMComponent <FMCardParserProtocol>
{
    FMPersonalListActionSignatureModel *_model;
}

@property(retain, nonatomic) FMPersonalListActionSignatureModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)parseCardData:(id)arg1 withType:(id)arg2;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

