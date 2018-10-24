//
//  AMPEventUploadRequest.h
//  Amplitude
//
//  Created by Francesco Perrotti Garcia on 10/24/18.
//  Copyright © 2018 Amplitude. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_SWIFT_NAME(EventUploadRequest)
@interface AMPEventUploadRequest : NSObject

@property (nonatomic, assign) int apiVersion;
@property (nonatomic, strong, nonnull) NSString *apiKey;
@property (nonatomic, strong, nonnull) NSString *events;
@property (nonatomic, assign) long long uploadTime;
@property (nonatomic, strong, nonnull) NSString *checksum;
@property (nonatomic, strong, nonnull) NSURL *url;

- (nonnull instancetype)initWithApiVersion: (int) apiVersion
                            apiKey: (nonnull NSString *) apiKey
                            events: (nonnull NSString *) events
                        uploadTime: (long long) uploadTime
                          checksum: (nonnull NSString *)checksum
                               url: (nonnull NSURL *)url;
@end
