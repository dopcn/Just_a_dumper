//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDVideoToPCMDescriptor;

@interface MDVideoToPCMCommand : NSObject
{
    _Bool _available;
    unsigned int _bitsPerChannel;
    unsigned int _numberOfChannels;
    CDUnknownBlockType _completionHandler;
    MDVideoToPCMDescriptor *_descriptor;
    double _sampleRate;
}

@property(nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(nonatomic) unsigned int bitsPerChannel; // @synthesize bitsPerChannel=_bitsPerChannel;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) MDVideoToPCMDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool available; // @synthesize available=_available;
- (void).cxx_destruct;
- (void)commit;
- (id)initWithDescriptor:(id)arg1;

@end

