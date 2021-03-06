//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PacketHeader : NSObject
{
    unsigned int _sequenceID;
    unsigned int _commandType;
    unsigned int _contentLength;
    unsigned int _reservedField;
}

@property(nonatomic) unsigned int reservedField; // @synthesize reservedField=_reservedField;
@property(nonatomic) unsigned int contentLength; // @synthesize contentLength=_contentLength;
@property(nonatomic) unsigned int commandType; // @synthesize commandType=_commandType;
@property(nonatomic) unsigned int sequenceID; // @synthesize sequenceID=_sequenceID;
- (struct packet_header)buildPacketHeaderStruct;
- (id)initWithPacketHeaderStruct:(struct packet_header *)arg1;
- (id)initWithSequenceID:(unsigned int)arg1 commandType:(unsigned int)arg2 contentLength:(unsigned int)arg3 reservedField:(unsigned int)arg4;

@end

